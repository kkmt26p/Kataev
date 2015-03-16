var 
n,i,k:integer;
A,B:real;
Begin
Writeln('¬ведите кол-во проводимых операций, а затем степень');
Readln(n,k);
B:=0;
if n<1 then Writeln('ќшибка')
else
Writeln;
for i:= 1 to n do begin
if i<>n then begin
B:=power(i,k);
A:=A+B;
Write(i,'^',k,'+')
end
else begin
B:=power(i,k);
A:=A+B;
Write(i,'^',k,'=')
end
end;
Write(A:6:2);
End.

