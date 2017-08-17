//
//  DropItBehaviour.h
//  Dropit
//
//  Created by nitesh.vi on 16/08/17.
//  Copyright © 2017 nitesh.vi. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DropItBehaviour : UIDynamicBehavior

- (void)addItem:(id <UIDynamicItem>) item;
- (void)removeItem:(id <UIDynamicItem>) item;

@end
