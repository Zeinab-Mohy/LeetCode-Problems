import numpy as np
class Solution:
    def largestLocal(self, grid: List[List[int]]) -> List[List[int]]:
        grid = np.array(grid)
        new_shape = [z-2 for z in list(grid.shape)]
        print(new_shape)#2*2
        new_grid = []
        ans_grid=[]
        for x in range(new_shape[0]):
            for xx in range(new_shape[1]):
                # print(x,xx)
                new_grid.append([x,xx])
        # print(new_grid[1])
        ll=[]
        for idx, x in enumerate(new_grid):
            # a=new_grid[idx]
            # print(new_grid[idx],new_grid[idx][0],new_grid[idx][1])
            a1=new_grid[idx][0]
            a2=new_grid[idx][1]
            b=a1
            bb=a2
            d=a1+1;dd=a2+1
            c=0
            cc=0
            maxx=[]
            for idx2, x2 in enumerate(grid):
                while(c<3):
                # for c in range(3):
                    maxx.append(grid[b][bb])
                    # if(b==d and bb==dd):
                    #     maxx.pop()
                    bb+=1
                    cc+=1
                    if(cc==3):
                        b+=1
                        bb=a2
                        c+=1
                        cc=0
                    
            ans_grid.append(max(maxx))
            # print(maxx)
            ll.append(maxx)
        # print(ll)
        final_grid=[]
        start = 0
        end = len(ans_grid) 
        step = new_shape[0]
        for i in range(start, end, step): 
            x = i 
            final_grid.append(ans_grid[x:x+step]) 

        return final_grid
