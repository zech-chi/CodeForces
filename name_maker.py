name = input()

splited_name = name.split()

splited_name[0] = splited_name[0][0]

print("_".join(splited_name), end=".cpp\n")
