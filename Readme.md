How I am Approaching towards it 

The Office Analogy
Imagine a single office worker sitting at a desk. This worker is our CPU. Everything about a CPU maps perfectly to this worker's office:

![rough-diagram](public/image.png)
![alt text](public/image-1.png)

The worker can only do math on numbers that are on the desk (in registers). To work with something from the filing cabinet (memory), you first have to walk over, grab the folder, and bring it to your desk. This is why registers exist. They're the fast workspace.



What Does the Office Worker Actually Do All Day?

Our office worker has exactly one routine, repeated forever:
Look at the checklist → read the next task (FETCH)
Understand the task → “Add sticky note #0 and sticky note #1” (DECODE)
Do the task → grab the calculator, punch in the numbers (EXECUTE)
Move to the next task on the checklist (ADVANCE PC)
That’s it. That’s a CPU. This loop of fetch, decode, and execute is the heartbeat of every processor ever made, from the Intel 4004 released in 1971 to Apple’s M5.



    ┌──────────────────────────────────────────────┐
    │  WORKER'S DAILY ROUTINE                      │
    │                                              │
    │  1. Read next task from checklist  [FETCH]   │
    │              │                               │
    │  2. Understand what it says        [DECODE]  │
    │              │                               │
    │  3. Do the work                    [EXECUTE] │
    │              │                               │
    │  4. Cross it off, move to next     [ADVANCE] │
    │              │                               │
    │              └──── repeat until "GO HOME" ───│
    └──────────────────────────────────────────────┘


    The worker stops only when a task says “Go home.” That is our HALT instruction.

---

Blueprint : CPU Architecture
Blueprint I can think off 
![alt text](public/image-2.png)


The Status Board (Flags)
On the wall next to the desk, there's a board with three indicator lights. Every time the worker uses the calculator, these lights update automatically:
Z (Zero): Lights up when the calculator's answer is exactly 0. It is used for equality checks
N (Negative): Lights up when the answer is negative (bit 15 is set in two's complement)
O (Overflow): Lights up when the numbers were too big and “wrapped around”
These status lights are how the worker makes decisions. More on that when we get to conditional jumps.


---


The Inbox Tray (Stack)
In the corner of the desk sits a spring-loaded tray called the inbox tray. The worker can:
Push a sticky note onto the tray (the tray sinks down one slot)
Pop the top note off (the tray springs up one slot)
This is a stack: last in, first out (LIFO). It's critical for two things:
Saving and restoring sticky note values temporarily
Remembering where you were when the boss says “go do this other thing and come back” (function calls)
The tray starts at the top (SP = 0xFFFF) and grows downward. Each push decreases the position, each pop increases it. This convention matches real x86 CPUs.