primeiro = int(input("digite o primeiro valor: "))
segundo = int(input("digite o segundo valor: "))
terceiro = int(input("digite o terceiro valor: "))
maior = 0
menor = 0

if primeiro > segundo and primeiro > terceiro:
    maior = primeiro
    if segundo > terceiro:
        menor = terceiro
    else:
        menor = segundo
else:
    if segundo > primeiro and segundo > terceiro:
        maior = segundo
        if primeiro > terceiro:
            menor = terceiro
        else:
            menor = primeiro
    else:
        maior = terceiro
        if segundo > primeiro:
            menor = primeiro
        else:
            menor = segundo
#condicoes para encontrar o numero maior e menor dentre os tres numeros digitados

print("maior: {}".format(maior))
print("menor: {}".format(menor))
