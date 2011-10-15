#include "romb.h"

int main()
{
try
  {
    symbol k1("k1"),k("k"),q("q"),p("p"),p1("p1"),p2("p2"),p3("p3"),ms("ms"),l("l"),s("s"),m1s("m1s"),m2s("m2s"),m3s("m3s");
    symbol l1("l1"),l2("l2"),l3("l3"),l4("l4"),t("t"),p4("p4"),p5("p5"),tp("tp"),v1("v1"),v2("v2");
  // oneloop box
  //      UFXmap l45 = UF(lst(k),lst(pow(k,2),pow(k+p1,2),pow(k+p1+p2,2),pow(k+p1+p2+p3,2)),lst(pow(p1,2)==0,pow(p2,2)==0));
  // MBintegral root_int(l45,lst(1,1,1,1),1);

   //two loop box bubble
  // UFXmap l45 = UF(lst(k,l),lst(pow(k,2),pow(k+p1,2),pow(k+p1+p2,2),pow(l+p1+p2,2),pow(l+p1+p2+p3,2),pow(l,2),pow(k-l,2)),lst(pow(p1,2)==0,pow(p2,2)==0,pow(p3,2)==0));
  //MBintegral root_int(l45,lst(1,1,1,1,1,1,1),2);

  // B0
  //    UFXmap l45 = UF(lst(k),lst(ms-pow(k,2),ms-pow(-k,2)),lst(ms==1));
  // MBintegral root_int(l45,lst(1,1),1);

  // 2 loop sunrise
  //UFXmap l45 = UF(lst(k,q),lst(ms-pow(k,2),ms-pow(-q-k,2),ms-pow(q,2)),lst(ms==1));
  //MBintegral root_int(l45,lst(1,1,1),2);


  //RoMB_planar box2loop(lst(k,l),lst(pow(k,2),pow(k+p1,2),pow(k+p1+p2,2),pow(l+p1+p2,2),pow(l+p1+p2+p3,2),pow(l,2),pow(k-l,2)),lst(pow(p1,2)==0,pow(p2,2)==0,pow(p3,2)==0),lst(1,1,1,1,1,1,1),2);

  //  RoMB_planar  box1loop(lst(k),lst(pow(k,2),pow(k+p1,2)-ms,pow(k+p1+p2,2),pow(k+p1+p2+p3,2)),lst(pow(p1,2)==0,pow(p2,2)==0,pow(p3,2)==0,p1==0,p2==0,p3==0,ms==1),lst(1,1,1,1),1);

  //  RoMB_planar B0_1loop(lst(k),lst(pow(k,2)-ms,pow(p+k,2)-ms),lst(ms==0,pow(p,2)==1),lst(1,1),1);

  //  RoMB_planar C0_1loop(lst(k),lst(pow(k,2)-ms,pow(p1+k,2)-ms,pow(p1+p2+k,2)),lst(ms==1,pow(p1,2)==0,pow(p2,2)==0,p1*p2==50),lst(1,1,1),1);
//cout<<" new point "<<endl<<root_int.new_point()<<endl;
// cout<<" saved point "<<endl<<root_int.get_point()<<endl;
//  MBcontinue(root_int);
  //cout<<MB_lst(l45,lst(1,1,1,1),1).expand()<<endl;


  // RoMB_loop_by_loop box2loop(lst(k,l),lst(pow(k,2),pow(k+p1,2),pow(k+p1+p2,2),pow(l+p1+p2,2),pow(l+p1+p2+p3,2),pow(l,2),pow(k-l,2)),lst(pow(p1,2)==0,pow(p2,2)==0,pow(p3,2)==0),lst(1,1,1,1,1,1,1));
  //      RoMB_loop_by_loop t2(lst(k,l), lst(pow(k,2),pow(p+k,2),pow(p+k+l,2),pow(l,2),pow(k+l,2)),lst(pow(p,2)==1),lst(1,1,1,1,1));


  // works!!!
  //        RoMB_loop_by_loop sunset(lst(k,l), lst(pow(k,2)-1,pow(p-k-l,2)-4,pow(l,2)-5),lst(pow(p,2)==s),lst(1,1,1));
      
    //      RoMB_loop_by_loop sunset(lst(k,l), lst(pow(k,2)-ms,pow(p-k-l,2)-ms,pow(l,2)-ms),lst(pow(p,2)==s),lst(1,1,1));
    //       sunset.integrate(lst(ms==1,m2s==1,m3s==1,s==0));
      
      //        RoMB_loop_by_loop t2loop(lst(k,l), lst(pow(k,2),pow(p+k,2),pow(p+k+l,2),pow(k+l,2),pow(l,2)),lst(pow(p,2)==s),lst(1,1,1,1,1));
      // t2loop.integrate(lst(s==1));
    
    /*     RoMB_loop_by_loop bubble_five_loop(lst(k,l1,l2,l3,l4), 
        lst(pow(k,2)-ms,pow(l1,2)-ms,pow(l2,2)-ms,pow(l3,2)-ms,pow(l4,2)-ms,pow(k+l1,2)-ms,pow(k+l1+l2,2)-ms,pow(k+l1+l2+l3,2)-ms,pow(k+l1+l2+l3+l4,2)-ms,pow(k+l1+l2+l3,2)-ms,pow(k+l1+l2,2)-ms,pow(k+l1,2)-ms),
        lst(ms==1),
        lst(1,1,1,1,1,1,1,1,1,1,1,1));
        */

  // works!!!
//             RoMB_loop_by_loop B0_1loop_lbl(lst(k),lst(pow(k,2)-2-ms,pow(p+k,2)-ms),lst(ms==0,pow(p,2)==1),lst(2,1));

//     RoMB_loop_by_loop B0_1loop_lbl(lst(k),lst(pow(k,2)-m1s,pow(p+k,2)-m2s),lst(pow(p,2)==s),lst(1,1));
    //    B0_1loop_lbl.integrate(lst(s==-1,m1s==1,m2s==1));

  //MB works???
                             RoMB_loop_by_loop C0_1loop_lbl(lst(k),lst(pow(k,2),pow(k+p1,2)-m1s,pow(k-p2,2)-m2s),lst(ms==1,pow(p1,2)==m1s,pow(p2,2)==m2s,p1*p2==(s-m1s-m2s)/2),lst(1,1,1));
      C0_1loop_lbl.integrate(lst(m1s==1,m2s==1,s==-100));


  //MB works???
  
    /*
      RoMB_loop_by_loop box1loopm0(lst(k),lst(-pow(k,2),-pow(k+p1,2),-pow(k+p1+p2,2),-pow(k+p1+p2+p4,2)),
                                  lst(pow(p1,2)==0,pow(p2,2)==0,pow(p4,2)==0,
                                      p1*p2==-s/2,//
                                      
                                      p1*p4==s/2+t/2,//
                                      
                                      p2*p4==-t/2 //
                                      ),
                                  lst(1,1,1,1));
    box1loopm0.integrate(lst(s==3,t==1));

    box1loopm0.integrate(lst(s==5,t==2));
    
    */
    /*
      4-loop  tadpole
    */


    //    RoMB_loop_by_loop tad4(lst(l3, l4, l2, l1),lst(pow(l1,2)- ms,pow(l2 + l1,2)- ms,pow(l2 + l3 + l4,2)- ms,pow(l4,2),pow(l3,2)),lst(),lst(1,1,1,1,1));
      //  tad4.integrate(lst(ms == 1));


    
     /*
       Pentagon
     */
   
    /*    RoMB_loop_by_loop pent(lst(k1),lst(pow(p1 + k1,2)- ms,pow(p1 + p5 + k1,2),
                                        pow(p1 + p5 + p4 + k1,2)- ms,pow(p1 + p5 + p4 + p3 + k1,2)- ms,
                                        pow(k1,2)),
                            lst(



p1*p1 == ms, p2*p2 == ms, p3*p3 == 0, p4*p4 == ms, p5*p5 == ms, 
p1*p2 == 1/2* (tp - 2* ms), p1*p3 == 1/2* (t - tp - v1), 
p1*p4 == ms - 1/2* (s + t - v1), p1*p5 == 1/2* (s - 2* ms), 
p2* p3 == 1/2* v1, p2* p4 == 1/2* (s - 2* ms - v1 - v2), 
p2* p5 == ms - 1/2* (s + tp - v2), p3* p4 == 1/2* v2, 
p3* p5 == 1/2* (tp - t - v2), p4* p5 == 1/2* (t - 2* ms)),
lst(1,1,1,1,1));
pent.integrate(lst(s==-2,t==-3,v2==-4,tp==-5,v1==-6,ms==1));
   
    */
  }
  catch(std::exception &p)
    {
      std::cerr<<"******************************************************************"<<endl;
      std::cerr<<"   >>>ERROR:  "<<p.what()<<endl;
      std::cerr<<"******************************************************************"<<endl;
      return 1;
    }
  return 0;
}