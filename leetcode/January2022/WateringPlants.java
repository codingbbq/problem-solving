// https://leetcode.com/problems/watering-plants/
// 2079. Watering Plants

public class WateringPlants {
    public static void main(String[] args) {
        int[] plants = {7,7,7,7,7,7,7};
        int capacity = 8;
        WateringPlants wp = new WateringPlants();
        int steps = wp.wateringPlants(plants, capacity);
        System.out.println(steps);
    }
    public int wateringPlants(int[] plants, int capacity) {
        int step = 0;
        int cap = capacity;
        for(int i = 0; i < plants.length; i++) {
            if(cap < plants[i]) {
                // Go to the river
                step += i;
                // Fill the bucket with the capacity
                cap = capacity;
                // Refill and come back to ith element
                step += i+1;
                cap -= plants[i];
            } else {
                // water the plan
                cap -= plants[i];
                step += 1;
            }
        }
        return step;
    }
}
