#include <iostream>
using namespace std;
#include <string>

class node{
	public:
		node*right;
		node*left;
		node*up;
		node*down;
		
	node(){right=NULL;left=NULL,up=NULL;down=NULL;}
		
};

class digitlinkedlist{
	public:
		node*tl=NULL;
		node*tr=NULL;
		node*ml=NULL;
		node*mr=NULL;
		node*bl=NULL;
		node*br=NULL;
	
	
	  node*head=NULL;
	  digitlinkedlist(int d)
	  {
	  	identifynumber(d);
	  	
	  }	
	  void identifynumber(int d)
	  {
	  	if(d>=0)
	  	{
	  		tl=new node;
	  		tr=new node;
	  		ml=new node;
	  		mr=new node;
	  		bl=new node;
	  		br=new node;
	  		if(d==0)
	  		{
	  			tl->right=tr;
	  			tr->left=tl; 
				tr->down=mr;
				mr->up=tr;
				tl->down=ml;
				ml->up=tl;
				ml->down=bl;
				bl->up=ml;
				mr->down=br;
				br->up=mr;
				bl->right=br;
				br->left=bl;	
			}
			else if(d==1)
			{
				tl->down=ml;
				ml->up=tl;
				ml->down=bl;
				bl->up=ml;	
			}
			else if(d==2)
			{
				tl->right=tr;
				tr->left=tl;
	  			tr->down=mr;
				mr->up=tr;
				mr->left=ml;
				ml->right=mr;
				ml->down=bl;
				bl->up=ml;	
				bl->right=br;
				br->left=bl;
			}
			else if(d==3)
			{
				tl->right=tr;
	  			tr->left=tl; 
	  			tr->down=mr;
	  			mr->up=tr;
	  			mr->left=ml;
	  			ml->right=mr;
	  			mr->down=br;
	  			br->up=mr;
	  			br->left=bl;
	  			bl->right=br;	
			}
			else if(d==4)
			{
				tl->down=ml;
				ml->up=tl;
				ml->right=mr;
				mr->left=ml;
				mr->up=tr;
				tr->down=mr;
				mr->down=br;
				br->up=mr;
			}
			else if(d==5)
			{
				tl->right=tr;
	  			tr->left=tl;
				tl->down=ml; 
				ml->up=tl;
				ml->right=mr;
				mr->left=ml;
				mr->down=br;
				br->up=mr;
				br->left=bl;
	  			bl->right=br;	
				
			}
			else if(d==6)
			{
				tl->right=tr;
	  			tr->left=tl; 
				tl->down=ml;
				ml->up=tl;
				ml->down=bl;
				bl->up=ml;
				mr->down=br;
				br->up=mr;
				bl->right=br;
				br->left=bl;
				mr->left=ml;
				ml->right=mr;
				
			}
			else if(d==7)
			{
				tl->right=tr;
	  			tr->left=tl; 
				tr->down=mr;
				mr->up=tr;
				mr->down=br;
				br->up=mr;	
			}
			else if(d==8)
			{
				tl->right=tr;
	  			tr->left=tl; 
				tr->down=mr;
				mr->up=tr;
				tl->down=ml;
				ml->up=tl;
				ml->down=bl;
				bl->up=ml;
				mr->down=br;
				br->up=mr;
				bl->right=br;
				br->left=bl;
				mr->left=ml;
				ml->right=mr;	
			}
			else
			{
				tl->right=tr;
	  			tr->left=tl; 
				tr->down=mr;
				mr->up=tr;
				tl->down=ml;
				ml->up=tl;
				mr->down=br;
				br->up=mr;	
				ml->right=mr;
				mr->left=ml;
			}
			head=tl;	
		}
		else
		 cout<<"Entered number is invalid as negative"<<endl;
	  }
	  
	  void display()
	  {
	  	if(tl->right==tr &&
		tr->down==mr &&
		tl->down==ml &&
		ml->down==bl &&
		mr->down==br &&
		bl->right==br &&
		bl->right==NULL)
		{
			cout<<"0";
		}
				
		else if(tl->down==ml &&
		ml->down==bl &&
		tl->right==NULL &&
		ml->right==NULL &&
		bl->right==NULL)
		{
			cout<<"1";
		}
				
		else if(tl->right==tr &&
		
		tr->down==mr &&
		ml->right==mr &&
		ml->down==bl &&
		bl->right==br &&
		tl->down==NULL &&
		mr->down==NULL)
		{
			cout<<"2";
		}
				
		else if(tl->right==tr &&
		tr->down==mr &&
		ml->right==mr &&
		mr->down==br &&
		bl->right==br &&
		tl->down==NULL &&
		ml->down==NULL)
		{
			cout<<"3";	
		}
		
		else if(tl->down==ml &&
		ml->right==mr &&
		tr->down==mr &&
		mr->down==br &&
		tl->right==NULL &&
		br->left==NULL &&
		ml->down==NULL)
		{
			cout<<"4"<<endl;
		}
		
		else if(tl->right==tr &&
		tl->down==ml &&
		ml->right==mr &&
		mr->down==br &&
		bl->right==br &&
		tr->down==NULL &&
		ml->down==NULL &&
		br->down==NULL)
		{
			cout<<"5";
		}
		
		else if(tl->right==tr &&
		tl->down==ml &&
		ml->down==bl &&
		mr->down==br &&
		bl->right==br &&
		ml->right==mr &&
		tr->down==NULL)
		{
			cout<<"6";
		}
		
		else if(tl->right==tr &&		
		tr->down==mr &&	
		mr->down==br &&			
		tl->down==NULL &&
		mr->left==NULL &&
		br->left==NULL)
		{
			cout<<"7";
		}
		
		else if(tl->right==tr &&
		tr->down==mr &&
		tl->down==ml &&
		ml->down==bl &&
		mr->down==br &&
		bl->right==br &&
		ml->right==mr)
		{
			cout<<"8";
		}
		
		else if(tl->right==tr &&
		tr->down==mr &&
		tl->down==ml &&
		mr->down==br &&
		ml->right==mr &&		
		ml->down==NULL)
		{
			cout<<"9";
		}
	  		
	  }
	  
	  ~digitlinkedlist()
	  {
	  	delete tl;
	  	tl=NULL;
	  	delete tr;
	  	tr=NULL;
	  	delete ml;
	  	ml=NULL;
	  	delete mr;
	  	mr=NULL;
	  	delete bl;
	  	bl=NULL;
	  	delete br;
	  	br=NULL;
	  	
	  	cout<<"Segment Display Deleted"<<endl;	
	  }
	  
		
};

class time{
	
	digitlinkedlist *d1=NULL;
	digitlinkedlist *d2=NULL;
	digitlinkedlist *d3=NULL;
	digitlinkedlist *d4=NULL;
	
	int mins;
	int hrs;
	public:
	
		
		time(int time)
		{
			int digits=0,digit;
			while (time>0)
			{
				digit=time%10;
				if (digits==0)
				{
					d4=new digitlinkedlist(digit);
					mins=digit;
				}
				 
				else if(digits==1)
				{
					d3=new digitlinkedlist(digit);
					mins+=10*digit;
				}
				 
				else if(digits==2)
				{
					d2=new digitlinkedlist(digit);
					hrs=digit;
				}
				 
				else 
				{
					d1=new digitlinkedlist(digit);
					hrs+=10*digit;
				}
				  
				time/=10;
				digits++;	
			}
			if(digits==3)
			 d1=new digitlinkedlist(0);
			if(digits==2)
			{
				d1=new digitlinkedlist(0);
				d2=new digitlinkedlist(0);
				hrs=0;
			}
			if(digits==1)
			{
				d1=new digitlinkedlist(0);
				d2=new digitlinkedlist(0);
				d3=new digitlinkedlist(0);
			}
			if(digits==0)
			{
				d1=new digitlinkedlist(0);
				d2=new digitlinkedlist(0);
				d3=new digitlinkedlist(0);
				d4=new digitlinkedlist(0);
				hrs=0;
				mins=0;
			}
		}

		 void displaytime()
		 {
		 	if(d1->tl->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	{
		 		cout<<"        ";
			}
		 	 
		 	if(d2->tl->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	if(d3->tl->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	if(d4->tl->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	 
		 	cout<<endl;
		 	 
		 	 
		 	for(int i=1;i<=8;i++)
		 	{
		 		if (i%4==1)
		 		{
				 	if(d1->tl->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				 	 
				 	if(d1->tr->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				}
				else if(i%4==2)
				{
					if(d2->tl->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				 	 
				 	if(d2->tr->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	  cout<<"    ";
					
				}
				else if(i%4==3)
				{
					if(d3->tl->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				 	 
				 	if(d3->tr->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
					
				}
				else
				{
				 	if(d4->tl->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				 	 
				 	if(d4->tr->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				 	cout<<endl;
				}	
			}
			
			if(d1->ml->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	if(d2->ml->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	if(d3->ml->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	if(d4->ml->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	cout<<endl;
		 	
		 	for(int i=1;i<=8;i++)
		 	{
		 		if (i%4==1)
		 		{
				 	if(d1->ml->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				 	 
				 	if(d1->mr->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				}
				else if(i%4==2)
				{
					if(d2->ml->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				 	 
				 	if(d2->mr->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	  cout<<"    ";
					
				}
				else if(i%4==3)
				{
					if(d3->ml->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				 	 
				 	if(d3->mr->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
					
				}
				else
				{
				 	if(d4->ml->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				 	 
				 	if(d4->mr->down!=NULL)
				 	 cout<<"*"<<"   ";
				 	else
				 	 cout<<"    ";
				 	cout<<endl;
				}	
			}
			
			
		 	if(d1->bl->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	if(d2->bl->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	if(d3->bl->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	if(d4->bl->right!=NULL)
		 	 cout<<"*****"<<"   ";
		 	else
		 	 cout<<"        ";
		 	cout<<endl;
		 }
		 void additionofminutes(int n)
		 {
		 	bool change=false;
		 	if(n<=60 && n>=0)
		 	{
		 		if (n==60)
		 		{
		 			hrs+=1;
		 			if (hrs==24)
		 			 {
		 			 	delete d1;
		 			 	delete d2;
		 			 	d1=new digitlinkedlist(0);
		 			 	d2=new digitlinkedlist(0);	
		 			 	change=true;
		 			 	hrs=0;
					 }
					 else
					 {
					 	int hr=hrs;int d;int i=0;
					 	while (hr>0)
					 	{
					 		d=hr%10;
					 		
					 		if(i==0)
					 		{
					 			delete d2;
					 			d2=new digitlinkedlist(d);
							}
							else if(i==1)
							{
								delete d1;
					 			d1=new digitlinkedlist(d);
							}
					 		hr/=10;
					 		i++;
						 }
						 if(i==1)
						 {
							 	delete d1;
							 	d1=new digitlinkedlist(0);
						 }
					 	
					 }
				
				}
		 		else
		 		{
		 			mins+=n;
		 			if(mins==60)
		 			{
			 			hrs+=1;
			 			delete d3;
		 			 	delete d4;
		 			 	d3=new digitlinkedlist(0);
		 			 	d4=new digitlinkedlist(0);
			 			if (hrs==24)
			 			 {
			 			 	delete d1;
			 			 	delete d2;
			 			 	d1=new digitlinkedlist(0);
			 			 	d2=new digitlinkedlist(0);	
			 			 	change=true;
			 			 	hrs=0;
						 }
						 else
						 {
						 	int hr=hrs;int d;int i=0;
						 	while (hr>0)
						 	{
						 		d=hr%10;
						 		
						 		if(i==0)
						 		{
						 			delete d2;
						 			d2=new digitlinkedlist(d);
								}
								else if(i==1)
								{
									delete d1;
						 			d1=new digitlinkedlist(d);
								}
						 		hr/=10;
						 		i++;
							 }
							 if(i==1)
							 {
							 	delete d1;
							 	d1=new digitlinkedlist(0);
							 }
						 	
						 }
						 mins=0;
					 }
					 else if(mins<60)
					 {
					 	int min=mins;int d;int i=0;
					 	while (min>0)
					 	{
					 		d=min%10;
					 		
					 		if(i==0)
					 		{
					 			delete d4;
					 			d4=new digitlinkedlist(d);
							}
							else if(i==1)
							{
								delete d3;
					 			d3=new digitlinkedlist(d);
							}
					 		min/=10;
					 		i++;
						 }
					 }
					 else
					 {
					 	mins=mins-60;
					 	hrs+=1;
					 	
					 	
			 			if (hrs==24)
			 			 {
			 			 	delete d1;
			 			 	delete d2;
			 			 	d1=new digitlinkedlist(0);
			 			 	d2=new digitlinkedlist(0);
							change=true;
							hrs=0;	
						 }
						 else
						 {
						 	int hr=hrs;int d;int i=0;
						 	while (hr>0)
						 	{
						 		d=hr%10;
						 		
						 		if(i==0)
						 		{
						 			delete d2;
						 			d2=new digitlinkedlist(d);
								}
								else if(i==1)
								{
									delete d1;
						 			d1=new digitlinkedlist(d);
								}
						 		hr/=10;
						 		i++;
							 }
							 if(i==1)
							 {
							 	delete d1;
							 	d1=new digitlinkedlist(0);
							 }
							 
						 	
						 }
						 int min=mins;int d;int i=0;
					 	while (min>0)
					 	{
					 		d=min%10;
					 		
					 		if(i==0)
					 		{
					 			delete d4;
					 			d4=new digitlinkedlist(d);
							}
							else if(i==1)
							{
								delete d3;
					 			d3=new digitlinkedlist(d);
							}
					 		min/=10;
					 		i++;
						 }
					 	
					 }
		 			
				}
				
			}
			displaytime();
			changeofdate(change);
			if (n>60)
			 cout<<"Minutes exceed 60"<<endl;
			else if(n==0)
			 cout<<"Adding of 0 will result in no change"<<endl;
			else if(n<0)
			 cout<<"Mnutes cannot be negative"<<endl;
			 
		 }
		 void subtractionofminutes(int n)
		 {
		 	
		 	bool change=false;
		 	if(n<=60 && n>=0)
		 	{
		 		if (n==60)//prevous day
		 		{
		 			hrs-=1;
		 			if (hrs<0)
		 			 {
		 			 	delete d1;
		 			 	delete d2;
		 			 	d1=new digitlinkedlist(2);
		 			 	d2=new digitlinkedlist(3);	
		 			 	change=true;
		 			 	hrs=23;
					 }
					 else
					 {
					 	int hr=hrs;int d;int i=0;
					 	while (hr>0)
					 	{
					 		d=hr%10;
					 		
					 		if(i==0)
					 		{
					 			delete d2;
					 			d2=new digitlinkedlist(d);
							}
							else if(i==1)
							{
								delete d1;
					 			d1=new digitlinkedlist(d);
							}
					 		hr/=10;
					 		i++;
						 }
						 if(i==1)
						 {
						 	delete d1;
						 	d1=new digitlinkedlist(0);
						 }
					 	
					 }
				
				}
		 		else
		 		{
		 			
		 			mins-=n;
		 			if(mins>=0)
		 			{
		 				if(mins==0)
		 				{
			 				delete d3;
			 			 	delete d4;
			 			 	d3=new digitlinkedlist(0);
			 			 	d4=new digitlinkedlist(0);
			 			 	mins=0;
						}
						else
						{
							int min=mins;int d;int i=0;
						 	while (min>0)
						 	{
						 		d=min%10;
						 		
						 		if(i==0)
						 		{
						 			delete d4;
						 			d4=new digitlinkedlist(d);
								}
								else if(i==1)
								{
									delete d3;
						 			d3=new digitlinkedlist(d);
								}
						 		min/=10;
						 		i++;
							 }
						}
			 				 
					 }
					
					 else//mins negative
					 {
					 	mins=60+mins;
					 	hrs-=1;
					 	
			 			if (hrs<0)
			 			 {
			 			 	delete d1;
			 			 	delete d2;
			 			 	d1=new digitlinkedlist(2);
			 			 	d2=new digitlinkedlist(3);
							change=true;
							hrs=23;	
						 }
						 else if (hrs==0)
			 			 {
			 			 	delete d1;
			 			 	delete d2;
			 			 	d1=new digitlinkedlist(0);
			 			 	d2=new digitlinkedlist(0);	
						 }
						 else
						 {
						 	int hr=hrs;int d;int i=0;
						 	while (hr>0)
						 	{
						 		d=hr%10;
						 		
						 		if(i==0)
						 		{
						 			delete d2;
						 			d2=new digitlinkedlist(d);
								}
								else if(i==1)
								{
									delete d1;
						 			d1=new digitlinkedlist(d);
								}
						 		hr/=10;
						 		i++;
							 }
							 if(i==1)
							 {
							 	delete d1;
							 	d1=new digitlinkedlist(0);
							 }
							 
						 	
						 }
						int min=mins;int d;int i=0;
					 	while (min>0)
					 	{
					 		d=min%10;
					 		
					 		if(i==0)
					 		{
					 			delete d4;
					 			d4=new digitlinkedlist(d);
							}
							else if(i==1)
							{
								delete d3;
					 			d3=new digitlinkedlist(d);
							}
					 		min/=10;
					 		i++;
						 }
					 	
					 }
		 			
				}
				
			}
			displaytime();
			changeofdate(change);
			if (n>60)
			 cout<<"Minutes exceed 60"<<endl;
			else if(n==0)
			 cout<<"Adding of 0 will result in no change"<<endl;
			else if(n<0)
			 cout<<"Mnutes cannot be negative"<<endl;
		 }
		 void additionofhours(int n)
		 {
		 	bool change=false;
		 	if(n>0)
		 	{
			 	if(n>=24)
			 	{
			 		change=true;
				 	if (n%24==0)
				 	{//nochange addition in days
				    } 
				    else
				    {
				    	hrs+=(n%24);//days+hrs added
			 			if (hrs==24)
			 			 {
			 			 	delete d1;
			 			 	delete d2;
			 			 	d1=new digitlinkedlist(0);
			 			 	d2=new digitlinkedlist(0);	
			 			 	hrs=0;
						 }
						 else if(hrs<24)
						 {
						 	int hr=hrs;int d;int i=0;
						 	while (hr>0)
						 	{
						 		d=hr%10;
						 		
						 		if(i==0)
						 		{
						 			delete d2;
						 			d2=new digitlinkedlist(d);
								}
								else if(i==1)
								{
									delete d1;
						 			d1=new digitlinkedlist(d);
								}
						 		hr/=10;
						 		i++;
							 }
							 if(i==1)
							 {
							 	delete d1;
						 		d1=new digitlinkedlist(0);
							 }
						 	
						 }
						 else
						 {
						 	
							hrs=hrs-24;//date changed
							int hr=hrs;int d;int i=0;
						 	while (hr>0)
						 	{
						 		d=hr%10;
						 		
						 		if(i==0)
						 		{
						 			delete d2;
						 			d2=new digitlinkedlist(d);
								}
								else if(i==1)
								{
									delete d1;
						 			d1=new digitlinkedlist(d);
								}
						 		hr/=10;
						 		i++;
							 }
							if(i==1)
							 {
							 	delete d1;
						 		d1=new digitlinkedlist(0);
							 }
						 }
					}
				}
				else
				{
					hrs+=n;
					if (hrs==24)//date changed
					{
					    change=true;
						delete d1;
		 			 	delete d2;
		 			 	d1=new digitlinkedlist(0);
		 			 	d2=new digitlinkedlist(0);	
		 			 	hrs=0;
					}
					else if(hrs<24)
					{
						int hr=hrs;int d;int i=0;
					 	while (hr>0)
					 	{
					 		d=hr%10;
					 		
					 		if(i==0)
					 		{
					 			delete d2;
					 			d2=new digitlinkedlist(d);
							}
							else if(i==1)
							{
								delete d1;
					 			d1=new digitlinkedlist(d);
							}
					 		hr/=10;
					 		i++;
						 }
						 if(i==1)
						 {
						 	delete d1;
					 		d1=new digitlinkedlist(0);
						 }
					}
					else 
					{
						change=true;
						hrs=hrs-24;//date changed
						int hr=hrs;int d;int i=0;
					 	while (hr>0)
					 	{
					 		d=hr%10;
					 		
					 		if(i==0)
					 		{
					 			delete d2;
					 			d2=new digitlinkedlist(d);
							}
							else if(i==1)
							{
								delete d1;
					 			d1=new digitlinkedlist(d);
							}
					 		hr/=10;
					 		i++;
						 }
						 if(i==1)
						 {
						 	delete d1;
					 		d1=new digitlinkedlist(0);
						 }
					}	
				}	
			}
			displaytime();
			changeofdate(change);
			if(n==0)
			 cout<<"Addition of 0 hrs same result";
			else if(n<0)
		 	 cout<<"Cannot add negative hours";
	    }  
	    void subttractionofhours(int n)
	    {
	    	bool change=false;
	    	if(n>0)
		 	{
			 	if(n>=24)
			 	{
			 		change=true;
				 	if (n%24==0)
				 	{//nochange addition in days  
				    } 
				    else
				    {
				    	hrs-=(n%24);//days-hrs added
				    	
			 			if (hrs==0)
			 			 {
			 			 	delete d1;
			 			 	delete d2;
			 			 	d1=new digitlinkedlist(0);
			 			 	d2=new digitlinkedlist(0);	
						 }
						 else if(hrs>0)
						 {
						 	int hr=hrs;int d;int i=0;
						 	while (hr>0)
						 	{
						 		d=hr%10;
						 		
						 		if(i==0)
						 		{
						 			delete d2;
						 			d2=new digitlinkedlist(d);
								}
								else if(i==1)
								{
									delete d1;
						 			d1=new digitlinkedlist(d);
								}
						 		hr/=10;
						 		i++;
							 }
							 if(i==1)
							 {
							 	delete d1;
						 		d1=new digitlinkedlist(0);
							 }
						 	
						 }
						 else
						 {
							hrs=hrs+24;//date changed hrs in neg
							int hr=hrs;int d;int i=0;
						 	while (hr>0)
						 	{
						 		d=hr%10;
						 		
						 		if(i==0)
						 		{
						 			delete d2;
						 			d2=new digitlinkedlist(d);
								}
								else if(i==1)
								{
									delete d1;
						 			d1=new digitlinkedlist(d);
								}
						 		hr/=10;
						 		i++;
							 }
							 if(i==1)
							 {
							 	delete d1;
						 		d1=new digitlinkedlist(0);
							 }
						 }
					}
				}
				else
				{
					hrs-=n;
					if (hrs==0)
					{
						delete d1;
		 			 	delete d2;
		 			 	d1=new digitlinkedlist(0);
		 			 	d2=new digitlinkedlist(0);	
					}
					else if(hrs>0)
					{
						int hr=hrs;int d;int i=0;
					 	while (hr>0)
					 	{
					 		d=hr%10;
					 		
					 		if(i==0)
					 		{
					 			delete d2;
					 			d2=new digitlinkedlist(d);
							}
							else if(i==1)
							{
								delete d1;
					 			d1=new digitlinkedlist(d);
							}
					 		hr/=10;
					 		i++;
						 }
						 if(i==1)
						 {
						 	delete d1;
					 		d1=new digitlinkedlist(0);
						 }
					}
					else 
					{
						change=true;
						hrs=hrs+24;//data changed
						int hr=hrs;int d;int i=0;
					 	while (hr>0)
					 	{
					 		d=hr%10;
					 		
					 		if(i==0)
					 		{
					 			delete d2;
					 			d2=new digitlinkedlist(d);
							}
							else if(i==1)
							{
								delete d1;
					 			d1=new digitlinkedlist(d);
							}
					 		hr/=10;
					 		i++;
						}
						if(i==1)
						 {
						 	delete d1;
					 		d1=new digitlinkedlist(0);
						 }
						
					}	
				}	
			}
			displaytime();
			changeofdate(change);
			if(n==0)
			 cout<<"Addition of 0 hrs same result";
			else if(n<0)
		 	 cout<<"Cannot add negative hours";
	    	
		}
		void amorpm(bool am)
		{
			cout<<endl;
			if(am)
			{
				cout << "  *  " <<"   "<< "*   *"<<endl;
			    cout << " * * " <<"   "<< "** **"<<endl;
			    cout << "*   *" <<"   "<< "* * *"<<endl;
			    cout << "*****" <<"   "<< "*   *"<<endl;
			    cout << "*   *" <<"   "<< "*   *"<<endl;
			}
			else
			{
				cout << "***** "<<"   "<< "*   *"<<endl;
			    cout << "*    *"<<"   "<< "** **"<<endl;
			    cout << "***** "<<"   "<< "* * *"<<endl;
			    cout << "*     "<<"   "<< "*   *"<<endl;
			    cout << "*     "<<"   "<< "*   *"<<endl;

			}
		}
		void conversionto12hrformat()
		{
			bool am;
			if(hrs==0)//AM
			{
				am=true;
				delete d2;
				d2=new digitlinkedlist(2);
				delete d1;
				d1=new digitlinkedlist(1);
			}
			else if(hrs<12)
				am=true;
		    
		    else if(hrs==12)
		    	am=false;
			
			else
			{
				am=false;
				hrs=hrs-12;//PM
				int hr=hrs;int d;int i=0;
			 	while (hr>0)
			 	{
			 		d=hr%10;
			 		if(i==0)
			 		{
			 			delete d2;
			 			d2=new digitlinkedlist(d);
					}
					else if(i==1)
					{
						delete d1;
			 			d1=new digitlinkedlist(d);
					}
			 		hr/=10;
			 		i++;
				 }
				if(i==1)
				{
					delete d1;
				 	d1=new digitlinkedlist(0);	
				}
			}
			displaytime();
			amorpm(am);
		}
		void changeofdate(bool change)
		{
			if (change)
			{
				cout<<"DATE CHANGED"<<endl;
			}
			
		}

		 ~time()
		 {
				delete d1;
				d1=NULL;
				delete d2;
				d2=NULL;
				delete d3;
				d3=NULL;
				delete d4;
				d4=NULL;
				
				cout<<"Clock Deleted"<<endl;
		 }
};
int main()
{
	int ti;
//	cout<<"Enter time"<<endl;
//	cin>>ti;
	time clock(2234);
	
	clock.displaytime();
	clock.additionofminutes(26);	
	clock.subtractionofminutes(30);	
	clock.additionofhours(100);
	
  clock.subttractionofhours(23);

    clock.conversionto12hrformat();
	cout<<endl;
    system("pause");
    return 0;
}
