#include <stdio.h>
int Katamichi,Ouhuku,Sum,BusDeal,Days;
int main(void){

//Introduction
printf("BusDealsは常磐交通の片道の運賃と利用する日数入力するだけで「バスカード」を買うべきか「定期券」を買うべきかが一瞬で分かるプログラムです。\n");

//Main
printf("片道の運賃を入力してください。\n");
scanf("%d",&Katamichi);
Ouhuku = Katamichi * 2;
printf("利用する日数を入力してください。\n");
scanf("%d",&Days);
Sum = Ouhuku * Days;
BusDeal = 18000 - Sum;
printf("合計金額は%d円です。\n",Sum);
if(BusDeal < 0){
    printf("定期券を購入した方がお得です!\n");
}else if(BusDeal >= 0){
    printf("バスカードを購入した方がお得です!\n");
}
//BusCard-4=3000*4=12000(18000)
return 0;
}