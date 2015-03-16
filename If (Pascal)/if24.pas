var
  x, y: real;

begin
  Readln(x);
  if  x > 0 then y:=2*sin(x)
    else 
      if x<=0 then y:=6-x;
  Writeln('f(x) = ',y:1:2);
end.