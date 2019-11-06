//
//  EERemoteVideoView.h
//  AgoraMiniClass
//
//  Created by yangmoumou on 2019/10/23.
//  Copyright © 2019 yangmoumou. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EETeactherVideoView : UIView
@property (strong, nonatomic) IBOutlet UIView *teactherVideoView;
@property (weak, nonatomic) IBOutlet UIImageView *speakerImage;

@property (weak, nonatomic) IBOutlet UIView *teacherRenderView;
- (void)updateAndsetTeacherName:(NSString *)name;
@end

NS_ASSUME_NONNULL_END
