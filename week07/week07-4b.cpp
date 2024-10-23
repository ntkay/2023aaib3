class Solution {
public:
    bool isRobotBounded(string instructions) {
        int dx[4] = {1,0,-1,0};
        int dy[4] = {0,1,0,-1};
        int x=0,y=0,dir=0; //direction 0 to right ,1 down ,2 left , 3 right
        for(char c : instructions){
            if(c=='G'){
                x += dx[dir];
                y += dy[dir];
            }
            if(c=='L') dir = (dir+3) % 4; //turn left actually -1 will be -,再+4再%4取餘數。變+3
            if(c=='R') dir = (dir+1) % 4; // 0to1to2to3to0to1to2to3to0...
        }
        if(x==0 && y==0) return true;
        else if(dir==0) return false;
        else return true;
    }
};
