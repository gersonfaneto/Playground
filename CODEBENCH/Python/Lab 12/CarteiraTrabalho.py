class Person:
    id = 1
    def __init__(self, name, age, , salary):
            self._id = Person.id
            Person.id += 1

            self._name = ""
            self.name = name

            self._age = 0
            self.age = age

            self._gender = ""
            self.gender = gender

            self._salary = 0
            self.salary = salary

    def __repr__(self):
        return "{}, {} anos, sexo {}, recebe {:.2f} reais.".format(self.name, \
        self.age, self.gender.lower(), self.salary)

    @property
    def name(self):
        return self._name
    @name.setter
    def name(self, value):
        assert isinstance(value, str) and len(value) <= 100, "Nome inválido!"
        self._name = value

    @property
    def age(self):
        return self._age
    @age.setter
    def age(self, value):
        assert isinstance(value, int) and 0 < value <= 150, "Idade inválida!"
        self._age = value

    @property
    def gender(self):
        return self._gender
    @gender.setter
    def gender(self, value):
        assert isinstance(value, str) and len(value) <= 15, "Genêro inválido!"
        self._gender = value

    @property
    def salary(self):
        return self._salary
    @salary.setter
    def salary(self, value):
        assert isinstance(value, float) and value >= 0, "Salário inválido!"
        self._salary = round(value, 2)

def createPerson():
    personName = input()
    personAge = int(input())
    personGender = input()
    personSalary = float(input())
    return Person(personName, personAge, personGender, personSalary)

def avarageFemSalary(listPeople):
    avarageSalary, qtWomen = 0, 0
    for person in listPeople:
        if person.gender == "Feminino":
            qtWomen += 1
            avarageSalary += person.salary
    return avarageSalary / qtWomen

def main():
    people = []
    for i in range(10):
        people.append(createPerson())

    print("{:.2f}".format(avarageFemSalary(people)))
    peopleSorted = sorted(people, key = lambda x: x.salary, reverse = True)
    for i in range(1):
        print(peopleSorted[i])

if __name__ == '__main__':
    main()
