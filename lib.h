template <typename T>
struct List{
	T primero;
	T segundo;
};

class Gen{

	public:
		Gen(int i);
		int getId();
		void setId(int i);	
	private:
		int id;
};
Gen::Gen(int i){
	id = i;
}

int Gen::getId(){
	return id;
}

void Gen::setId(int i){
	id = i;
}
