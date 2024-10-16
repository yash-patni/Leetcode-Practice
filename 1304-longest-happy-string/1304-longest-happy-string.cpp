class Solution {
public:
    string longestDiverseString(int a, int b, int c) {
        string s="";
        int total=a+b+c;
        int x=0, y=0, z=0;
        while(total-- >0){
            if((a>=b && a>=c && x!=2) || (a>0 && (y==2 || z==2))){
                s=s+'a';
                a--;
                x++;
                y=0;
                z=0;
            }
            else if((b>=a && b>=c && y!=2) || (b>0 && (x==2 || z==2))){
                s=s+'b';
                b--;
                y++;
                x=0;
                z=0;
            }
            else if((c>=b && c>=a && z!=2) || (c>0 && (y==2 || x==2))){
                s=s+'c';
                c--;
                z++;
                y=0;
                x=0;
            }

        }
        return s;

    }
};