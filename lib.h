template <typename T>
struct List{
	T primero;
	T segundo;
};

class Gen{

	public:
		Gen(int id);
		int getId();
		void setId(int id);	
	private:
		int id;
};

Gen::Gen(int id){
	id = id;
}

int Gen::getId(){
	return id;
}

void Gen::setId(int id){
	id = id;
}
