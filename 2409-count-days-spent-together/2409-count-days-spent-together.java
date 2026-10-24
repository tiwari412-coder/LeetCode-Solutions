import java.time.LocalDate;
import java.time.temporal.ChronoUnit;

class Solution {
    public int countDaysTogether(String arriveAlice, String leaveAlice, String arriveBob, String leaveBob) {
        
        LocalDate a1 =  LocalDate.parse("2022-" + arriveAlice);
        LocalDate a2 =  LocalDate.parse("2022-" + leaveAlice);
        LocalDate b1 =  LocalDate.parse("2022-" + arriveBob);
        LocalDate  b2=  LocalDate.parse("2022-" + leaveBob);

        // find the later arrival date where both can reach

        LocalDate start = a1.isAfter(b1) ? a1 : b1;
        LocalDate end = a2.isBefore(b2) ? a2 : b2;

        if(start.isAfter(end)) return 0;

        return (int)ChronoUnit.DAYS.between(start , end) + 1;



        
        
        
    }
}