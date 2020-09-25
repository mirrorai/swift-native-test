import SwiftUI

struct ContentView: View {
    var body: some View {
        let a = String(cString: say(10))
        return Text("Hello, world!" + a).padding()
    }
}

struct ContentView_Previews: PreviewProvider {
    static var previews: some View {
        ContentView()
    }
}
