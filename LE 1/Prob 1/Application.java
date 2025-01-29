class Mother{
    
    int x=3;
    
void show(){
        System.out.println("Mother is called "+x);
    }
    
}

class Child extends Mother{
    
    /*void show(){
       System.out.println("Child is called");
    }*/
    
}

public class Application
{
	public static void main(String[] args) {
		
		Mother m=new Mother();
		m.show();
		Child ch=new Child();
		ch.show();
		
	}
}
