a = int(input(" "))
hari    = a // 86400
sisa    = a % 86400
jam     = sisa // 3600
sisa    = sisa % 3600
menit   = sisa // 60
detik   = sisa % 60

if (a >= 0 and a < 86400) : print(f"{jam:02d}:{menit:02d}:{detik:02d}")
else: print(f"{hari} hari {jam:02d}:{menit:02d}:{detik:02d}")

