var
  x: integer;

begin
  Readln(x);
  if (x > 0) or (x < 0) then begin
    if x > 0 then Write('�������������')
    else Write('�������������');
    if (x mod 2) = 0 then Write(' ׸���� �����')
    else Write(' �������� �����');
  end
  else Write('������� �����');
  
  
end.