import time

limit = 1000000000  # Limite de contagem: um bilhão
count = 0

# Marca o tempo de início
start_time = time.time()

# Loop de contagem
for i in range(limit):
    count += 1

# Marca o tempo de término
end_time = time.time()

# Calcula a duração
duration = end_time - start_time
print(f"Tempo de contagem em Python: {duration} segundos")
