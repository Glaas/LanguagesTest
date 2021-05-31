using System;

class Program
{
    static void Main(string[] args)
    {
        int x = 0;
        var startTime = (DateTime.UtcNow - System.Diagnostics.Process.GetCurrentProcess().StartTime.ToUniversalTime()).TotalMilliseconds;

        while (x < 2000000000) x++;

        var endTime = (DateTime.UtcNow - System.Diagnostics.Process.GetCurrentProcess().StartTime.ToUniversalTime()).TotalMilliseconds;
        var duration = endTime - startTime;

        Console.WriteLine($"Full duration of the WHILE LOOP in miliseconds is {duration}");
        Console.WriteLine($"Full duration of the WHILE LOOP in seconds is {duration / 1000}");

        x = 0;

        startTime = (DateTime.UtcNow - System.Diagnostics.Process.GetCurrentProcess().StartTime.ToUniversalTime()).TotalMilliseconds;

        for (x = 0; x < 2000000000; x++) { }
        endTime = (DateTime.UtcNow - System.Diagnostics.Process.GetCurrentProcess().StartTime.ToUniversalTime()).TotalMilliseconds;
        duration = endTime - startTime;

        Console.WriteLine($"Full duration of the FOR LOOP in miliseconds is {duration}");
        Console.WriteLine($"Full duration of the FOR LOOP in seconds is {duration / 1000}");

        Console.WriteLine("All done chief !");

        Console.ReadLine();
    }
}

