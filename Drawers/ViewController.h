//
//  ViewController.h
//  Drawers
//
//  Created by Eliza Herring on 11/17/15.
//  Copyright © 2015 nyu.edu. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <AVFoundation/AVFoundation.h>


@interface ViewController : UIViewController{
    IBOutlet UIView *frameForCapture;
    IBOutlet UIImageView *imageview;
}

- (IBAction)takePhoto:(id)sender;


@end

