class A{
	public static void main(String args[]){
		A r=new A();
		r.show();
	}
	A(){
		System.out.println("Constructor");
	}
	{
		System.out.println("Instance block");
	}
	static{
		System.out.println("Static block");
	}
	void show(){
		System.out.println("Method");
	}
	
}