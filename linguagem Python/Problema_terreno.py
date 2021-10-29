largura : float; comprimento : float; metroquadrado : float; area : float; preco : float
#variaveis flutuantes

largura = float(input("digite a largura do terreno: "))
comprimento = float(input("digite o comprimento do terreno: "))
metroquadrado = float(input("digite o valor do metro quadrado: "))
#lendo os valores das variaveis

area = largura * comprimento
preco = area * metroquadrado
#atribuindo o valor das variaveis como resultado a multiplicação das anteriormente lidas

print("area: {:.2f}m²".format(area))
print("preco: {:.2f} reais".format(preco))
#retornar os resultados da area e preço