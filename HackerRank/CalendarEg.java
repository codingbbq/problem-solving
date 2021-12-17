import java.util.Calendar;
import java.util.Locale;

public class CalendarEg {

    public static void main(String[] args) {
        int month = 12;
        int day = 3;
        int year = 2015;
        Calendar cal = Calendar.getInstance();
        cal.set(Calendar.MONTH, month-1);
        cal.set(Calendar.DAY_OF_MONTH, day);
        cal.set(Calendar.YEAR, year);
        System.out.println(cal.getDisplayName(Calendar.DAY_OF_WEEK, Calendar.LONG, Locale.US).toUpperCase());
    }
}
