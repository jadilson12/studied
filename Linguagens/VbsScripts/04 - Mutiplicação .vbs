Fator="+"
valor1=221
valor2=32
valor3=10
valor4=5
valor5=100

resultado = operar(fator,valor1,valor2,valor3,valor4,valor5)

WScript.Echo resultado

function operar (operador,op1,op2,op3,op4,op5)
   select case operador
      case "+":
         operar = op1 + op2 + op3 + op4 + op5
      case "-":
         operar = op1 - op2 - op3 - op4 - op5
      case "*":
         operar = op1 * op2 * op3 * op4 * op5
      case else:
         operar = op1 / op2 / op3 / op4 / op5
   end select
end function