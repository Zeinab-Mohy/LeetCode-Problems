class Solution:
    def reversePrefix(self, word: str, ch: str) -> str:
        list_word=list(word)
        counter=0
        for i in list_word:
            counter+=1
            if(i==ch):
                new_list=list_word[0:counter]
                new_list.reverse()
                return ''.join(new_list+list_word[counter::])
                break
        return ''.join(list_word)
