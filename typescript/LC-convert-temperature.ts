// https://leetcode.com/problems/convert-the-temperature/
// 2469. Convert the Temperature

{
    function convertTemperature(celsius: number): number[] {
        return [
            celsius + 273.15,
            celsius * 1.80 + 32.00
        ]
    };

    const celsius = 36.50;
    console.log(convertTemperature(celsius));
}
