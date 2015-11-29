var i:( ()=>Int ) = null;

def j(implicit x:Int=0,y:Int=1):Int={
	i= ()=>( j(y,x+y) ) ;
	return x+y;
}

i=()=>(j());
for(k<-1 to 10)println(i());
