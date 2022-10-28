
class SuperHero :
    def __init__(self, name, power, tagline):
        self.name    = name
        self.power   = power
        self.tagline = tagline

    def printInfo (self):
        info = "\n Hero Name   : " + self.name +\
               "\n Super Power : " + self.power +\
               "\n Tag Line    : " + self.tagline
        print (info)
        return info


