import sqlite3

conn = sqlite3.connect('university.db')
cursor = conn.cursor()

cursor.execute('''
    CREATE TABLE IF NOT EXISTS students (
        id INTEGER PRIMARY KEY AUTOINCREMENT,
        name TEXT NOT NULL,
        major TEXT NOT NULL,
        gpa REAL
    )
''')

cursor.execute('DELETE FROM students') 

students_data = [
    ('Nguyễn Văn A', 'CNTT', 3.5),
    ('Trần Thị B', 'Kinh tế', 2.8),
    ('Lê Văn C', 'CNTT', 3.8),
    ('Phạm Thị D', 'Ngôn ngữ', 1.9),
    ('Hoàng Văn E', 'Cơ điện tử', 3.1)
]
cursor.executemany('INSERT INTO students (name, major, gpa) VALUES (?, ?, ?)', students_data)
conn.commit()

print("--- Tất cả sinh viên ---")
cursor.execute('SELECT * FROM students')
for row in cursor.fetchall():
    print(row)

print("\n--- Sinh viên có GPA > 3.0 ---")
cursor.execute('SELECT * FROM students WHERE gpa > 3.0')
for row in cursor.fetchall():
    print(row)

cursor.execute("UPDATE students SET gpa = 3.2 WHERE name = 'Trần Thị B'")
conn.commit()

cursor.execute('DELETE FROM students WHERE gpa < 2.0')
conn.commit()

conn.close()