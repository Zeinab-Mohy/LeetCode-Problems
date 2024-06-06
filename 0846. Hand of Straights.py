class Solution:
    def isNStraightHand(self, hand: List[int], groupSize: int) -> bool:
        if(len(hand)%groupSize==0):
            hand.sort()
            ch=0
            for idx,ii in enumerate(hand):
                if(hand[idx]!=-1):
                    xx=hand[idx]
                    # print(xx)
                    con=xx+1
                    counter=1
                    while(counter!=groupSize):
                        if con in hand:
                            hand[hand.index(con)]=-1
                            # print(xx,con)
                            con+=1
                        else:
                            ch=1
                            break
                        counter+=1
                    if(ch==1 or counter!=groupSize):
                        return False
                        break
            return True
        else:
            return False
