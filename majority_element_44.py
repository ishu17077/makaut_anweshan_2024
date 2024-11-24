def getOccurences(elements, searchable):
   occurences = 0;
   if((searchable not in itemsCounted)):  
     for i in range(0, noOfElements):
        if(searchable == elements[i]):
           occurences+=1
     itemsCounted.add(searchable)
   return occurences

itemsCounted = set()
noOfElements = int(input())
elementsRaw = input()
elements = [int(item) for item in elementsRaw.split(" ")]
for i in range(0, noOfElements):
   occurences = getOccurences(elements, elements[i])
   if(occurences > noOfElements/3):
      print(elements[i], end=" ")


