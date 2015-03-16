var
  x: integer;

begin
  Readln(x);
  if (x > 0) or (x < 0) then begin
    if x > 0 then Write('Положительное')
    else Write('Отрицательное');
    if (x mod 2) = 0 then Write(' Чётное число')
    else Write(' Нечётное число');
  end
  else Write('Нулевое число');
  
  
end.