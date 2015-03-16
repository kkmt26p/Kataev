var i:integer;
begin
  Readln(i);
 case i of
  1: writeln('Плохо');
  2: writeln('Неудовлетворительно');
  3: writeln('Удовлитворительно');
  4: writeln('Хорошо');
  5: writeln('Отлично');
  else writeln('Ошибка!!');
  end;
end.