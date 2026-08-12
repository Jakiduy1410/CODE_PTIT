import sys
from PyQt5.QtWidgets import (QApplication, QWidget, QVBoxLayout,
                             QHBoxLayout, QGridLayout, QPushButton, QLabel, QSizePolicy)
from PyQt5.QtCore import Qt, QPropertyAnimation, QEasingCurve, QRect
from PyQt5.QtGui import QFont, QFontDatabase, QPalette, QColor


STYLE = """
QWidget {
    background-color: #1a1a2e;
    color: #e0e0e0;
    font-family: 'Courier New', monospace;
}


#display_expr {
    background: transparent;
    color: #556b8a;
    font-size: 80px;
    padding: 0px 20px;
    border: none;
    qproperty-alignment: AlignRight;
}
#display_main {
    background: transparent;
    color: #f0f4ff;
    font-size: 110px;
    font-weight: bold;
    padding: 0px 20px 10px 20px;
    border: none;
    qproperty-alignment: AlignRight;
}

#display_container {
    background-color: #12122a;
    border-radius: 0px;
    border-bottom: 2px solid #0f3460;
    min-height: 110px;
}


QPushButton {
    border: 1px solid #3a3a5a;
    border-radius: 14px;
    font-size: 26px;
    font-weight: bold;
    padding: 0px;
    min-height: 58px;
    min-width: 58px;
}
QPushButton:pressed {
    padding-top: 3px;
}

QPushButton.num {
    background-color: #16213e;
    color: #dce8ff;
}
QPushButton.num:hover {
    background-color: #1e2f55;
}
QPushButton.num:pressed {
    background-color: #0d1829;
}

QPushButton.op {
    background-color: #0f3460;
    color: #7ec8e3;
    font-size: 30px;
}
QPushButton.op:hover {
    background-color: #154d8c;
}
QPushButton.op:pressed {
    background-color: #0a2540;
}

QPushButton.eq {
    background-color: #e94560;
    color: #ffffff;
    font-size: 34px;
}
QPushButton.eq:hover {
    background-color: #ff5a7a;
}
QPushButton.eq:pressed {
    background-color: #c13150;
}

QPushButton.fn {
    background-color: #1f1f3a;
    color: #a89dff;
    font-size: 20px;
}
QPushButton.fn:hover {
    background-color: #2c2c52;
}
QPushButton.fn:pressed {
    background-color: #141428;
}


QPushButton.close, QPushButton.maximize {
    font-size: 14px;
    border: none;
}
QPushButton.close {
    background-color: #e94560;
    color: #ffffff;
}
QPushButton.close:hover {
    background-color: #ff5a7a;
}
QPushButton.close:pressed {
    background-color: #c13150;
}
QPushButton.maximize {
    background-color: #0f3460;
    color: #ffffff;
}
QPushButton.maximize:hover {
    background-color: #154d8c;
}
QPushButton.maximize:pressed {
    background-color: #0a2540;
}

QPushButton.zero {
    background-color: #16213e;
    color: #dce8ff;
    border-radius: 14px;
}
QPushButton.zero:hover {
    background-color: #1e2f55;
}
"""


class Calculator(QWidget):
    def __init__(self):
        super().__init__()
        self.current = "0"
        self.expression = ""
        self.reset_next = False
        self.initUI()

    def initUI(self):
        self.setWindowTitle("Máy Tính")
        self.resize(500, 900)
        self.setMinimumSize(1000, 1200)
        self.setStyleSheet(STYLE)
        self.setWindowFlags(Qt.Window | Qt.FramelessWindowHint)
        self.setAttribute(Qt.WA_TranslucentBackground, False)

        main_layout = QVBoxLayout(self)
        main_layout.setContentsMargins(0, 0, 0, 0)
        main_layout.setSpacing(0)


        title_bar = QWidget()
        title_bar.setObjectName("title_bar")
        title_bar.setFixedHeight(45)
        title_layout = QHBoxLayout(title_bar)
        title_layout.setContentsMargins(12, 0, 12, 0)
        title_layout.setSpacing(10)

        title_label = QLabel("Máy Tính")
        title_label.setStyleSheet("font-size: 16px; font-weight: 700; border: none;")
        title_label.setAlignment(Qt.AlignLeft | Qt.AlignVCenter)

        self.maximize_btn = QPushButton("Phóng to")
        self.maximize_btn.setProperty("class", "maximize")
        self.maximize_btn.setCursor(Qt.PointingHandCursor)
        self.maximize_btn.setFixedSize(100, 30)
        self.maximize_btn.clicked.connect(self.toggle_maximize)

        close_btn = QPushButton("Thoát")
        close_btn.setProperty("class", "close")
        close_btn.setCursor(Qt.PointingHandCursor)
        close_btn.setFixedSize(80, 30)
        close_btn.clicked.connect(self.close)

        title_layout.addWidget(title_label)
        title_layout.addStretch()
        title_layout.addWidget(self.maximize_btn)
        title_layout.addWidget(close_btn)
        main_layout.addWidget(title_bar)


        display_container = QWidget()
        display_container.setObjectName("display_container")
        display_container.setMinimumHeight(500)
        disp_layout = QVBoxLayout(display_container)
        disp_layout.setContentsMargins(0, 10, 0, 0)
        disp_layout.setSpacing(0)

        self.expr_label = QLabel("")
        self.expr_label.setObjectName("display_expr")

        self.main_label = QLabel("0")
        self.main_label.setObjectName("display_main")

        disp_layout.addWidget(self.expr_label)
        disp_layout.addWidget(self.main_label)
        main_layout.addWidget(display_container)


        grid_widget = QWidget()
        grid_widget.setSizePolicy(QSizePolicy.Expanding, QSizePolicy.Expanding)
        grid_widget.setContentsMargins(12, 12, 12, 14)
        grid = QGridLayout(grid_widget)
        grid.setSpacing(10)

        buttons = [

            ("AC", 0, 0, 1, "fn"),
            ("+/-", 0, 1, 1, "fn"),
            ("%",  0, 2, 1, "fn"),
            ("÷",  0, 3, 1, "op"),

            ("7", 1, 0, 1, "num"),
            ("8", 1, 1, 1, "num"),
            ("9", 1, 2, 1, "num"),
            ("×", 1, 3, 1, "op"),

            ("4", 2, 0, 1, "num"),
            ("5", 2, 1, 1, "num"),
            ("6", 2, 2, 1, "num"),
            ("−", 2, 3, 1, "op"),

            ("1", 3, 0, 1, "num"),
            ("2", 3, 1, 1, "num"),
            ("3", 3, 2, 1, "num"),
            ("+", 3, 3, 1, "op"),

            ("0", 4, 0, 2, "zero"),
            (".", 4, 2, 1, "num"),
            ("=", 4, 3, 1, "eq"),
        ]

        for item in buttons:
            label, row, col, span, cls = item
            btn = QPushButton(label)
            btn.setSizePolicy(QSizePolicy.Expanding, QSizePolicy.Expanding)
            btn.setProperty("class", cls)
            btn.setStyleSheet("")
            btn.setCursor(Qt.PointingHandCursor)
            btn.clicked.connect(lambda _, l=label: self.on_click(l))

            if cls == "zero":
                btn.setObjectName("zero")
            grid.addWidget(btn, row, col, 1, span)

        main_layout.addWidget(grid_widget)

        self._drag_pos = None


    def mousePressEvent(self, e):
        if e.button() == Qt.LeftButton:
            self._drag_pos = e.globalPos() - self.frameGeometry().topLeft()

    def mouseMoveEvent(self, e):
        if self._drag_pos and e.buttons() == Qt.LeftButton:
            self.move(e.globalPos() - self._drag_pos)

    def toggle_maximize(self):
        if self.isMaximized():
            self.showNormal()
            self.maximize_btn.setText("Phóng to")
        else:
            self.showMaximized()
            self.maximize_btn.setText("Thu nhỏ")


    def update_display(self):
        text = self.current

        if len(text) > 12:
            try:
                val = float(text)
                text = f"{val:.6g}"
            except:
                pass
        self.main_label.setText(text)
        self.expr_label.setText(self.expression)

    def on_click(self, key):
        if key == "AC":
            self.current = "0"
            self.expression = ""
            self.reset_next = False

        elif key == "+/-":
            if self.current != "0":
                if self.current.startswith("-"):
                    self.current = self.current[1:]
                else:
                    self.current = "-" + self.current

        elif key == "%":
            try:
                self.current = str(float(self.current) / 100)
                if self.current.endswith(".0"):
                    self.current = self.current[:-2]
            except:
                pass

        elif key in ("÷", "×", "−", "+"):
            op_map = {"÷": "/", "×": "*", "−": "-", "+": "+"}
            real_op = op_map[key]
            self.expression = self.current + f"  {key}  "
            self.current = self.current
            self._pending_op = real_op
            self._left = self.current
            self.reset_next = True

        elif key == "=":
            if hasattr(self, "_pending_op") and hasattr(self, "_left"):
                try:
                    result = eval(f"{self._left}{self._pending_op}{self.current}")
                    res_str = str(result)
                    if res_str.endswith(".0"):
                        res_str = res_str[:-2]
                    self.expression = self._left + f"  {self._pending_op}  " + self.current + "  ="
                    self.current = res_str
                    del self._pending_op
                    del self._left
                    self.reset_next = True
                except ZeroDivisionError:
                    self.current = "Lỗi"
                    self.expression = ""
                    self.reset_next = True

        elif key == ".":
            if self.reset_next:
                self.current = "0"
                self.reset_next = False
            if "." not in self.current:
                self.current += "."

        else:
            if self.reset_next or self.current == "0":
                self.current = key
                self.reset_next = False
            else:
                if len(self.current) < 12:
                    self.current += key

        self.update_display()


if __name__ == "__main__":
    app = QApplication(sys.argv)
    app.setStyle("Fusion")
    calc = Calculator()
    calc.show()
    sys.exit(app.exec_())
