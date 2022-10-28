
# Reads a list of superhero info from a file
# Gives you the info of the superhero you ask for
# Writes the sequence in which superhero details were asked in an output file
from superHeroClass import SuperHero

heroList = []
def readSuperHeros() :
    # open the input csv file
    with open ("superHero.csv","r") as fp :
        for line in fp:
            attr = line.split(',')
            hero = SuperHero(attr[0], attr[1], attr[2])
            heroList.append(hero)

def writeToOutputFile (hero) :
    with open ("superHeroOutput.txt", "a+") as fp :
        fp.write ("{}\n".format (hero.printInfo()))

def getSuperHeroDetails ():
    heroName = input ("Which SuperHero details do you want ? ")
    for hero in heroList :
        if heroName.lower() == hero.name.lower() :
            writeToOutputFile (hero)
            return
    print ("NO info for SuperHero : " + heroName)
    
def main ():
    readSuperHeros()
    getSuperHeroDetails()

if __name__ == "__main__" :
    main()


