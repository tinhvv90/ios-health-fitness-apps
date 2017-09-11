/*
    Copyright (C) 2016 Apple Inc. All Rights Reserved.
    See LICENSE.txt for this sample’s licensing information
    
    Abstract:
    Displays energy-related information retrieved from HealthKit.
*/

@import UIKit;
@import HealthKit;

@interface AAPLEnergyViewController : UITableViewController

@property (nonatomic) HKHealthStore *healthStore;

@end
