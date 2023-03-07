class Actor:
    def __init__(self, actorName, oscarMajor, oscarMinor):
        self._actorName = ""
        self.actorName = actorName
        self._oscarMajor = 0
        self.oscarMajor = oscarMajor
        self._oscarMinor = 0
        self.oscarMinor = oscarMinor

    @property
    def actorName(self):
        return self._actorName
    @actorName.setter
    def actorName(self, value):
        assert isinstance(value, str) and len(value) <= 100, "Nome inválido!"
        self._actorName = value

    @property
    def oscarMajor(self):
        return self._oscarMajor
    @oscarMajor.setter
    def oscarMajor(self, value):
        assert isinstance(value, int) and value >= 0, "Quantidade inválida!"
        self._oscarMajor = value

    @property
    def oscarMinor(self):
        return self._oscarMinor
    @oscarMinor.setter
    def oscarMinor(self, value):
        assert isinstance(value, int) and value >= 0, "Quantidade inválida!"
        self._oscarMinor = value

    def compareActor(self, other):
        pointsSelf = (self.oscarMajor * 2) + self.oscarMinor
        pointsOther = (other.oscarMajor * 2) + other.oscarMinor

        if pointsSelf > pointsOther:
            return self.actorName
        elif pointsOther > pointsSelf:
            return other.actorName
        else:
            totalOscarSelf = self.oscarMajor + self.oscarMinor
            totalOscarOther = other.oscarMajor + other.oscarMinor
            if totalOscarSelf > totalOscarOther:
                return self.actorName
            else:
                return other.actorName

def createActor():
    actorName = input()
    qtOscarMajor = int(input())
    qtOscarMinor = int(input())
    return Actor(actorName, qtOscarMajor, qtOscarMinor)

def main():
    firstActor = createActor()
    secondActor = createActor()
    print(firstActor.compareActor(secondActor))

if __name__ == '__main__':
    main()
