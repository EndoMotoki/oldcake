#include <stdio.h>
int main(void){
    int temp,humidity;
    
    puts("雪が降るかを確認できるプログラムです");
    puts("雪が降る条件が整っていても雪雲や雨雲が上空になければ雪は降りません");
    puts("現在の気温を教えてください(単位無しで入力お願いします)");
    scanf("%d",&temp);
    puts("現在の湿度を教えてください(単位なしで入力お願いします)");
    scanf("%d",&humidity);
    if (temp<8 && humidity<35) {
        puts("雪が降るでしょう");
    }
    else if(temp>8 && humidity>40){
        puts("雨になるでしょう");
    }
    else if(temp<4 && humidity>60){
        puts("みぞれになる可能性が高いです");
    }
    else if(temp<-1 && humidity<100){
        puts("湿度にかかわらず雪が降ります");
    }
    return 0;
}
