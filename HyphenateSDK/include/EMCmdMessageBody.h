/*!
 *  \~chinese
 *  @header EMCmdMessageBody.h
 *  @abstract 命令消息体
 *  @author Hyphenate
 *  @version 3.00
 *
 *  \~english
 *  @header EMCmdMessageBody.h
 *  @abstract Command message body
 *  @author Hyphenate
 *  @version 3.00
 */

#import <Foundation/Foundation.h>

#import "EMMessageBody.h"

/*!
 *  \~chinese 
 *  命令消息体
 *
 *  \~english
 *  Command message body
 */
@interface EMCmdMessageBody : EMMessageBody

/*!
 *  \~chinese
 *  命令内容
 *
 *  \~english
 *  Command content
 */
@property (nonatomic, copy) NSString *action;

/*!
 *  \~chinese
 *  初始化命令消息体
 *
 *  @param aAction  命令内容
 *  
 *  @result 命令消息体实例
 *
 *  \~english
 *  Initialize command message body
 *
 *  @param aAction  Action content
 *
 *  @result Instance of command message body
 */
- (instancetype)initWithAction:(NSString *)aAction;

@end
