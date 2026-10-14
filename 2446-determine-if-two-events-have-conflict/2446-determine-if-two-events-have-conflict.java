import java.time.LocalTime;
class Solution {
    public boolean haveConflict(String[] event1, String[] event2) {
        LocalTime start1 = LocalTime.parse(event1[0]);
        LocalTime end1 = LocalTime.parse(event1[1]);

        LocalTime start2 = LocalTime.parse(event2[0]);
        LocalTime end2 = LocalTime.parse(event2[1]);

        return !start1.isAfter(end2) && !start2.isAfter(end1);

    }
}