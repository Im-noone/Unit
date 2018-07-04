#include<iostream>
#include<string>
#include<math.h>


class unit{
	protected:
		string name;
		string type;
		double times;//与国际标准单位的比值, 数值为a，表示比值为10^a，时间为比值 
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
			this->name = "克"; 
		}
};

class kg:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 0;
			this->type = "weight";
			this->name = "千克"; 
		}
};

class ton:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 3;
			this->type = "weight";
			this->name = "吨"; 
		}
};

class mg:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -6;
			this->type = "weight";
			this->name = "克"; 
		}
};

class m:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 0;
			this->type = "length";
			this->name = "米"; 
		}
};

class km:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 3;
			this->type = "length";
			this->name = "公里"; 
		}
};

class dm:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -1;
			this->type = "length";
			this->name = "分米"; 
		}
};

class cm:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -2;
			this->type = "length";
			this->name = "厘米"; 
		}
};

class mm:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -3;
			this->type = "length";
			this->name = "毫米"; 
		}
};

class nm:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = -9;
			this->type = "length";
			this->name = "纳米"; 
		}
};

class s:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 1/3600;
			this->type = "time";
			this->name = "秒"; 
		}
};

class min:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 1/60;
			this->type = "time";
			this->name = "分钟"; 
		}
};

class h:public unit{
	public:
		g(double value){
			this->value = value;
			this->times = 1;
			this->type = "time";
			this->name = "小时"; 
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
