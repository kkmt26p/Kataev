const
MaxN=100;
var
a:array[1..MaxN] of integer;
i,j,n,x:integer;
begin
readln(n);
for i:=1 to n do
readln(a[i]);

for i:=1 to n-1 do 
  for j:=n downto i+1 do 
  if a[j]<a[j-1] then begin
  x:=a[j];
  a[j]:=a[j-1];
  a[j-1]:=x;
  end;
  for i:=1 to n do
  write(a[i],' ');
  end.