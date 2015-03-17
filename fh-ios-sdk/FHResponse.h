//
//  FHResponse.h
//  fh-ios-sdk

//

#import <Foundation/Foundation.h>

/** Representing the response returned from the server */

@interface FHResponse : NSObject{
  NSData * rawResponse;
  NSString * rawResponseString;
  NSDictionary * parsedResponse;
  int responseStatusCode;
  NSError* error;
}


/** Get the raw response data */
@property(nonatomic,strong)NSData * rawResponse;

/** Get the raw response data as NSString */
@property(nonatomic,strong)NSString * rawResponseAsString;

/** Get the response data as NSDictionary */
@property(nonatomic,strong)NSDictionary * parsedResponse;

/** Get the response's status code */
@property(assign) int responseStatusCode;

/** Get the error of the response */
@property(nonatomic, strong)NSError* error;

/** Parse the response string (JSON format) 
 
 @param res The response string
 */
- (void) parseResponseString :(NSString *)res;

/** Parse the response data (JSON format) 
 
 @param dat The response data
 */
- (void) parseResponseData : (NSData *)dat;
@end
