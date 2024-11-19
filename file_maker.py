name = input()

splited_name = name.split()

splited_name[0] = splited_name[0][0]

file_name = "_".join(splited_name) + ".cpp"

with open('template.cpp', 'r') as template:
    content = template.read()

with open(file_name, 'w') as file:
    file.write(content);

print("_".join(splited_name), end=".cpp created succesfully.\n")
