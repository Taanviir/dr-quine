package main

import (
	"fmt"
	"os"
)

func main() {
	template := `package main

import (
	"fmt"
	"os"
)

func main() {
	template := %q
	fmt.Printf(template, template)
	os.WriteFile("Grace_kid.go", []byte(fmt.Sprintf(template, template)), 0644)
}
`
	fmt.Printf(template, template)
	os.WriteFile("Grace_kid.go", []byte(fmt.Sprintf(template, template)), 0644)
}
