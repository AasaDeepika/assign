import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.time.*;

import java.text.DateFormatSymbols;// not given originally in the code.

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String month = in.next();
        String day = in.next();
        String year = in.next();
       /* DateFormatSymbols dfs = new DateFormatSymbols();
        String weekdays[] = dfs.getWeekdays(); */
        
        Calendar cal = Calendar.getInstance();
        cal.set(Integer.parseInt(year), Integer.parseInt(month)-1, Integer.parseInt(day));

        /*System.out.println(weekdays[cal.get(Calendar.DAY_OF_WEEK)].toUpperCase());*/
        System.out.println(new DateFormatSymbols().getWeekdays()[cal.get(Calendar.DAY_OF_WEEK)].toUpperCase());
    }
}
 
