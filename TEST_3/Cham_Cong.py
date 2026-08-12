import sys
from datetime import datetime

class CN:
   def __init__(self,ma,name,start,end):
      self.ma = ma
      self.name = name
      self.start = start
      self.end = end
      self.time = end - start
      self.t = self.chuanhoa()
      self.status = self.check()

   def chuanhoa(self):
      full = int((self.time).total_seconds()) - 3600
      gio = full // 3600 
      phut = (full % 3600) // 60
      return f"{gio} gio {phut} phut"
   
   def check(self):
      mn = 8 * 3600
      full = (self.time).total_seconds() - (3600)

      if full >= mn:
         return 'DU'
      else:
         return 'THIEU'
      



def main():
   data = sys.stdin.buffer
   n = int(data.readline().decode())
   
   arr = []
   
   for _ in range(n):
      ma = data.readline().decode().strip()
      name = data.readline().decode().strip()
      start = data.readline().decode().strip()
      end = data.readline().decode().strip()
      t1 = datetime.strptime(start, '%H:%M')
      t2 = datetime.strptime(end, '%H:%M')

      arr.append(CN(ma,name,t1,t2))

   arr = sorted(arr, key= lambda x : (-x.time))
   for x in arr:
      print(f"{x.ma} {x.name} {x.t} {x.status}")
main()