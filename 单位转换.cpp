#include<iostream>
#include<string>
#include<math.h>


class unit{
	protected:
		string name;
		string type;
		double times;//����ʱ�׼��λ�ı�ֵ, ��ֵΪa����ʾ��ֵΪ10^a��ʱ��Ϊ��ֵ 
		double value;
	public:
		virtual double const getValue(){
			return value;
		}
		virtual string const getType(){
			return type;
		}
		virtual double const getTimes(){
			return times;
		}
		virtual string const getName(){
			return name;
		}
}; 

class g:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -3;
			this->type = "weight";
			this->name = "��"; 
		}
};

class kg:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 0;
			this->type = "weight";
			this->name = "ǧ��"; 
		}
};

class ton:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 3;
			this->type = "weight";
			this->name = "��"; 
		}
};

class mg:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -6;
			this->type = "weight";
			this->name = "��"; 
		}
};

class m:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 0;
			this->type = "length";
			this->name = "��"; 
		}
};

class km:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 3;
			this->type = "length";
			this->name = "����"; 
		}
};

class dm:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -1;
			this->type = "length";
			this->name = "����"; 
		}
};

class cm:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -2;
			this->type = "length";
			this->name = "����"; 
		}
};

class mm:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -3;
			this->type = "length";
			this->name = "����"; 
		}
};

class nm:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -9;
			this->type = "length";
			this->name = "����"; 
		}
};

class s:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 1/3600;
			this->type = "time";
			this->name = "��"; 
		}
};

class min:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 1/60;
			this->type = "time";
			this->name = "����"; 
		}
};

class h:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 1;
			this->type = "time";
			this->name = "Сʱ"; 
		}
};

int transform(unit a, unit b){
	if(a.getType()!=b.getType()){
		return 0;
	}
	else{
		return a.getValue()/b.getValue();
	}
}
