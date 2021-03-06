0x05, 0x0D,        // Usage Page (Digitizer)
0x09, 0x04,        // Usage (Touch Screen)
0xA1, 0x01,        // Collection (Application)
0x85, 0x03,        //   Report ID (3)
0x09, 0x22,        //   Usage (Finger)
0xA1, 0x00,        //   Collection (Physical)
0x09, 0x42,        //     Usage (Tip Switch)
0x15, 0x00,        //     Logical Minimum (0)
0x25, 0x01,        //     Logical Maximum (1)
0x75, 0x01,        //     Report Size (1)
0x95, 0x01,        //     Report Count (1)
0x81, 0x02,        //     Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
0x95, 0x03,        //     Report Count (3)
0x81, 0x03,        //     Input (Const,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
0x09, 0x32,        //     Usage (In Range)
0x09, 0x47,        //     Usage (0x47)
0x95, 0x02,        //     Report Count (2)
0x81, 0x02,        //     Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
0x95, 0x0A,        //     Report Count (10)
0x81, 0x03,        //     Input (Const,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
0x05, 0x01,        //     Usage Page (Generic Desktop Ctrls)
0x26, 0xFF, 0x7F,  //     Logical Maximum (32767)
0x75, 0x10,        //     Report Size (16)
0x95, 0x01,        //     Report Count (1)
0x65, 0x00,        //     Unit (None)
0x09, 0x30,        //     Usage (X)
0x81, 0x02,        //     Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
0x09, 0x31,        //     Usage (Y)
0x46, 0x00, 0x00,  //     Physical Maximum (0)
0x81, 0x02,        //     Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
0x05, 0x0D,        //     Usage Page (Digitizer)
0x09, 0x48,        //     Usage (0x48)
0x09, 0x49,        //     Usage (0x49)
0x95, 0x01,        //     Report Count (1)
0x81, 0x02,        //     Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
0x81, 0x03,        //     Input (Const,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
0x09, 0x51,        //     Usage (0x51)
0x75, 0x10,        //     Report Size (16)
0x95, 0x02,        //     Report Count (2)
0x81, 0x02,        //     Input (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position)
0x09, 0x55,        //     Usage (0x55)
0x15, 0x00,        //     Logical Minimum (0)
0x25, 0x08,        //     Logical Maximum (8)
0x75, 0x08,        //     Report Size (8)
0x95, 0x01,        //     Report Count (1)
0xB1, 0x02,        //     Feature (Data,Var,Abs,No Wrap,Linear,Preferred State,No Null Position,Non-volatile)
0xC0,              //   End Collection
0xC0,              // End Collection

// 96 bytes