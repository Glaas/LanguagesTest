using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class IncrementData : MonoBehaviour
{
    
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.I))
        {
            Increment();
        }
    }

    void Increment()
    {

        var times = DateTime.UtcNow;

        int x = 0;

        while (x<2000000000)
        {
            x++;
        }

        var timed = DateTime.UtcNow;

        var diff = timed - times;
        
        print($"execution time was {diff.TotalMilliseconds}");
    }
}
